#include <stdio.h>

char line[100];

int valor;

int main(void) {

  printf("Como te encuntras el dia de hoy?  \n(type 1 para bien, type 0 para mal):  ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &valor);

    if (valor == 1 ) {

        printf("Genial sigue asi y llegaras muy lejos\n");
    
    } else if (valor == 0 ) {
        printf("\nNo te preocupes las cosas mejoraran pronto, confia en ti mismo y estaras bien\n");

    } else 
        printf("\nEntiendo tu frustracion con la vida, \npero por favor intentalo una vez mas\n");

return 0;
}