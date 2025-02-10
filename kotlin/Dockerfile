# Usa la imagen oficial de Kotlin
FROM openjdk:17-alpine

# Instala Kotlin
RUN apk add --no-cache kotlin

# Establece el directorio de trabajo
WORKDIR /app

# Copia el archivo de Kotlin al contenedor
COPY soluc.kt /app/soluc.kt

# Compila el archivo Kotlin a bytecode de JVM
RUN kotlinc soluc.kt -include-runtime -d soluc.jar

# Comando para ejecutar el benchmark
CMD ["java", "-jar", "soluc.jar"]