typedef struct fila Fila;
typedef struct lista Lista;

Fila* criar_fila();
void inserir(Fila* fila, float valor);
float remover(Fila* fila);
void liberar(Fila* fila);
void imprimir(Fila* fila);