# ft_printf 📢

**ft_printf** — Implementación personalizada de la función `printf` en C, creada por Yasir.  
Este proyecto forma parte del 42 Cursus y permite entender cómo funciona la función de impresión formateada en C y crear una versión propia desde cero.

---

## 📌 ¿Qué es este proyecto?

- Re-implementación de la función estándar `printf` de C.  
- Permite manejar **formatos básicos**: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, y `%%`.  
- Incluye soporte para **flags, ancho de campo, precisión y alineación**, según el estándar de la función original.  
- Perfecto para entender internamente cómo funciona la salida formateada en C y practicar gestión de cadenas y memoria.

---

## 🧰 Tecnologías y entorno

- **Lenguaje principal:** C (C99)  
- **Compilador:** `cc` u otro compatible con C99  
- **Makefile:** para compilar la biblioteca estática `libftprintf.a` y facilitar la integración en otros proyectos

---

## 🚀 Cómo usar / compilar

```bash
# Clonar el repositorio
git clone https://github.com/yasirrdev/printf.git
cd printf

# Compilar la biblioteca
make

# Limpiar objetos
make clean   # Borra archivos .o
make fclean  # Borra .o y la biblioteca .a
make re      # Limpia y recompila
```

Para usar la librería en tu código:

```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hola %s! Numero: %d\n", "Mundo", 42);
    return 0;
}

// Compilar:
gcc tu_programa.c -L<ruta_printf> -lftprintf
```

---

## 📄 Contenido del repositorio

- Código fuente de `ft_printf` y funciones auxiliares  
- `ft_printf.h` — header con declaraciones de funciones  
- `Makefile` — para compilar la librería y limpiar archivos objeto  
- `.gitignore`

---

## ✅ Qué incluye

- Soporte para **todos los tipos de datos básicos** mencionados  
- Gestión de **flags, ancho, precisión y alineación**  
- Librería compilable y reusable en otros proyectos C

---

## 🎯 Uso ideal

- Como base reusable para proyectos propios que necesiten salida formateada  
- Para aprender a manejar cadenas, memoria y funciones variádicas en C  
- Para reforzar conocimientos sobre cómo funciona internamente `printf`

---

## 📝 Contribuciones

Si quieres añadir mejoras o extensiones:

1. Haz un fork del repositorio  
2. Añade tus funciones o modificaciones, asegurando compatibilidad con C99  
3. Incluye tests si aplica  
4. Abre un pull request explicando los cambios

---

## 📩 Autor / Licencia

Repositorio mantenido por **Yasir** — ideal como referencia educativa y base de proyectos en C.

