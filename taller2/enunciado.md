# Taller 1

## 1. Enunciado

Desarrollar un programa en C++ que, utilizando la clase `Persona` del enunciado anterior (`taller1`), permita analizar las variables estadísticas de un `grupo de personas`. El programa debe almacenar dinámicamente los datos de las personas y calcular los siguientes indicadores:

- Media aritmética del IMC del grupo.
- Clasificación general del IMC, indicando la categoría predominante.
- Porcentaje de personas en cada categoría de IMC: bajo peso, peso normal, sobrepeso y obesidad.
- Porcentaje de hombres y mujeres en la población analizada.
- Distribución por rangos de edad (ej. menores de 18, 18-35, 36-50, mayores de 50).

El programa debe implementar el uso de `new` en el constructor para definir un vector dinámico de objetos Persona.

## 2. Diagrama UML de abstracción

![Diagrama UML](UML.png)

Se crearon dos clases `Persona` y `IMC`. Al crear el objeto `Persona`, se crea el objeto `IMC`, con ello, se puede acceder directamente a los atributos de `IMC` de `Persona`, pues se calculan al construirse `Persona`.

## 3. Análisis de complejidad espacial

- Análisis de la Clase `IMC`
  - Métodos.
    1. `calcularIMC()` → 4 bytes (float).
    2. `clasificarPeso()` → X_1 bytes (string).
    3. `calcularPesoSaludable()` → 0 bytes (void).
    4. `calcularGrasaSaludable()` → 4 bytes (float).
  - Atributos.
    1. `imc` → 4 bytes (float).
    2. `peso_clasif` → X_2 bytes (float).
    3. `min_peso_ok` → 4 bytes (float).
    4. `max_peso_ok` → 4 bytes (float).
    5. `grasa_corp` → 4 bytes (float).
  - Ecuación de complejidad espacial.

    4(2) + X_1 + 4(4) + X_2 = X_1 + X_2 + 8 + 16

    = X_1 + X_2 + 24

- Análisis de la Clase `Persona`
  - Métodos.
    1. `getPeso()` → 4 bytes (float).
    2. `getAltura()` → Y_1 bytes (float).
    3. `getEdad()` → 4 bytes (int).
    4. `getSexo()` → 4 bytes (int).
    5. `operator<<()` → 0 bytes (ostream).
  - Atributos.
    1. `imc` → X_1 + X_2 + 24 bytes (IMC).
    2. `nombre_completo` → Y_2 bytes (string).
    3. `peso` → 4 bytes (float).
    4. `edad` → 4 bytes (int).
    5. `sexo` → 4 bytes (int).
  - Ecuación de complejidad espacial.

    4(3) + Y_1 + X_1 + X_2 + 24 + Y_2 + 4(3)

    = Y_1 + Y_2 + X_1 + X_2 + 12 + 12 + 24

    = Y_1 + Y_2 + X_1 + X_2 + 48

- Análisis de la Clase `GrupoPersonas`
  - Métodos.
    1. `agregarPersona()` → 0 bytes (void).
    2. `operator[]()` →  Y_1 + Y_2 + X_1 + X_2 + 48 bytes (Persona).
    3. `mostrarPersonas()` → 4 bytes (int).
  - Atributos.
    1. `personas` → M(8 + N) bytes (Persona **), donde `N` es el número de personas.
    2. `cantidad` → 4 bytes (int).
    3. `index` → 4 bytes (int).
  - Ecuación de complejidad espacial.

    Y_1 + Y_2 + X_1 + X_2 + 48 + 4 + M(8 + N) + 4(2)

    = Y_1 + Y_2 + X_1 + X_2 + M(8 + N) + 50
- Análisis del `main()`
  - Variables.
    1. `cantidad` → 4 bytes (int).
    2. `sumaIMC` → 4 bytes (float).
    3. `conteo` → 4 bytes (4) = 16 bytes (int).
    4. `hombres` → 4 bytes (int).
    5. `mujeres` → 4 bytes (int).
    6. `edades` → 4 bytes (4) = 16 bytes (int).
    7. `grupo1` → Y_1 + Y_2 + X_1 + X_2 + M(8 + 3) + 50 bytes = Y_1 + Y_2 + X_1 + X_2 + 11M + 50 bytes, con `n = 3` (grupoPersonas).
  - Dentro del ciclo.
    1. `*persona` → 3(Y_1 + Y_2 + X_1 + X_2 + 48) bytes (Persona).
    2. `imc` → 4 bytes (int).
  - Ecuación de complejidad espacial.
  
  16(2) + 4(4) + Y_1 + Y_2 + X_1 + X_2 + 11M + 50 + 3(Y_1 + Y_2 + X_1 + X_2 + 48) + 4

  = 32 + 16 + 50 + 4 + 11M + 3(Y_1 + Y_2 + X_1 + X_2 + 48)

  = 102 + 11M + 3(Y_1 + Y_2 + X_1 + X_2 + 48)
