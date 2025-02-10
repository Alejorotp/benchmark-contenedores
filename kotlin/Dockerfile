# Usa la imagen oficial de Kotlin
FROM kotlin:latest

# Establece el directorio de trabajo
WORKDIR /app

# Copia el código fuente al contenedor
COPY benchmark.kt /app/benchmark.kt

# Compila el código fuente a un JAR ejecutable
RUN kotlinc benchmark.kt -include-runtime -d benchmark.jar

# Comando para ejecutar el JAR
CMD ["java", "-jar", "benchmark.jar"]