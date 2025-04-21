typedef struct estrutura Estrutura;
Estrutura *create();
int inserir(Estrutura* estrutura, Requisicao* requisicao);
int get_size(Estrutura* estrutura);
Requisicao * remover(Estrutura* estrutura);
void libera_estrutura(Estrutura* estrutura); 
