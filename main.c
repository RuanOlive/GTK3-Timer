// Importa a biblioteca do GTK
#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    // Ponteiro para um objeto que devera’ ser utilizado para manipular
    // a janela principal do seu programa.
    GtkWidget *janela_principal;

    // Prepara a variavel pra virar um objeto do tipo botao-gtk.
    GtkWidget *botao1;

    // Inicializa GTK+. Deve vir antes de qualquer chamada para outras funcoes do GTK+.
    gtk_init(&argc, &argv);

    // Cria a janela principal (ainda invisivel). O parametro GTK_WINDOW_TOPLEVEL
    // Indica que a janela que nao esta ’dentro’ de nenhuma outra.
    janela_principal = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    // define o titulo da janela
    gtk_window_set_title(GTK_WINDOW(janela_principal), "GTK-Timer");

    // Cria um botao com o texto Iniciar Timer
    botao1 = gtk_button_new_with_label("Iniciar Timer");

    // Isto empacota o botão na janela (um recipiente gtk).
    gtk_container_add(GTK_CONTAINER(janela_principal), botao1);

    // Torna os Widgets Visiveis
    gtk_widget_show(botao1);
    gtk_widget_show(janela_principal);

    // Chama funcao do GTK que coloca o programa em um loop de
    // espera por eventos (clique do mouse, pressionamento de teclas, ...)
    gtk_main();

    return 0;
}