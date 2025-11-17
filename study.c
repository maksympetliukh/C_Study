/*GTK 3.0 Library*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <gdk/gdkkeys.h>
#include <gsk/gsk.h>

int main(int argc, char **argv) {
    gtk_init();//initialization of widgets and toolset

    GtkWidget *window = gtk_window_new();//initialization of main window

    gtk_window_set_title(GTK_WINDOW(window), "My first widget");//Set a main window header
    gtk_window_set_default_size(GTK_WINDOW(window), 1000, 800);//Set window size
    gtk_window_present(GTK_WINDOW(window));//show a window

    while (g_list_model_get_n_items(gtk_window_get_toplevels()) > 0) {//start the loop of events listening and user interaction
        g_main_context_iteration(NULL, true);//exit loop after every window will be closed
    }

    return EXIT_SUCCESS;
}