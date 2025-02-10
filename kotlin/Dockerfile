# Usa la imagen oficial de OpenJDK
FROM openjdk:17-alpine

# Instala Kotlin y su compilador
RUN apk add --no-cache curl && \
    curl -s https://get.sdkman.io | bash && \
    bash -c "source $HOME/.sdkman/bin/sdkman-init.sh && sdk install kotlin"

# Establece el directorio de trabajo
WORKDIR /app

# Copia el código fuente al contenedor
COPY soluc.kt /app/soluc.kt

# Compila el código
RUN bash -c "source $HOME/.sdkman/bin/sdkman-init.sh && kotlinc soluc.kt -include-runtime -d soluc.jar"

# Ejecuta el benchmark
CMD ["java", "-jar", "soluc.jar"]
