typedef struct requisicao Requisicao;
Requisicao*  cria_requisicao(char* nome, int inscricao, char* procedimento);
char *get_nome(Requisicao* requisicao);
int get_inscricao(Requisiçao* requisicao);
char* get_procedimento(Requisicao* requisicao);
void libera(Requisicao* requisicao);



    