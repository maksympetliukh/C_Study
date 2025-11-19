/*GTK4.0 - GtkGrid*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

static void app_activate(GApplication* app, gpointer* user_data) {
    GtkWidget* window = gtk_application_window_new(GTK_APPLICATION(app));
    gtk_window_set_title(GTK_WINDOW(window), "GTK Grid");
    gtk_window_set_default_size(GTK_WINDOW(window), 640, 480);

    GtkWidget* grid = gtk_grid_new();

    GtkWidget* btn0 = gtk_button_new_with_label("Button 0");
    gtk_grid_attach(GTK_GRID(grid), btn0, 0, 0, 1, 1);
    GtkWidget* btn1 = gtk_button_new_with_label("Button 1");
    gtk_grid_attach(GTK_GRID(grid), btn1, 1, 0, 1, 1);
    GtkWidget* btn2 = gtk_button_new_with_label("Button 2");
    gtk_grid_attach(GTK_GRID(grid), btn2, 0, 1, 1, 1);

    gtk_window_set_child(GTK_WINDOW(window), grid);
    gtk_window_present(GTK_WINDOW(window));
}
int main(int argc, char **argv) {
    GtkApplication* app = gtk_application_new("my.gtk.box", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}