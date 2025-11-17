/*GTK 4.0 - */

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

static void app_activate(GApplication* app, gpointer* user_data) {
    GtkWidget* window = gtk_application_window_new(GTK_APPLICATION(app));//create a window
    gtk_window_set_title(GTK_WINDOW(window), "My Program");//set window title
    gtk_window_set_default_size(GTK_WINDOW(window), 600, 600);//set window size

    gtk_window_present(GTK_WINDOW(window));//show window
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("my.prog", G_APPLICATION_DEFAULT_FLAGS);//initialization of application
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);//set signal handler

    int status = g_application_run(G_APPLICATION(app), argc, argv);//run application

    g_object_unref(app);//free memory

    return status;
}