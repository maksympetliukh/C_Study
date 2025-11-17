/*GTK 4.0*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

static void app_activate (GApplication *app, gpointer* user_data) {

    GtkWidget* main_window = gtk_application_window_new(GTK_APPLICATION(app));
    gtk_window_set_title(GTK_WINDOW(main_window), "Create a button");
    gtk_window_set_default_size(GTK_WINDOW(main_window), 500, 350);

    GtkWidget* button = gtk_button_new_with_label("Click here");//create a button
    gtk_window_set_child(GTK_WINDOW(main_window), button);//set a button as a window's element
    gtk_window_present(GTK_WINDOW(main_window));
}

int main(int argc, char **argv) {
    GtkApplication* app = gtk_application_new("my.prog", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), app);

    int status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);

    return status;
}