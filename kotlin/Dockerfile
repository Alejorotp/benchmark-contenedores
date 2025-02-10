FROM kotlin:1.5.21-jdk11
WORKDIR /app
COPY soluc.kt .
CMD ["kotlinc", "soluc.kt", "-include-runtime", "-d", "soluc.jar"] && ["java", "-jar", "soluc.jar"]