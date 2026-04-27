#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

/*Se agregaron const a los parametros enteros de funcion 
sumar ya que estos no se modifican a lo largo de la funcion*/
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

//Dadas las variables a y b las multiplica para obtener el resultado de dicha operacion
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
