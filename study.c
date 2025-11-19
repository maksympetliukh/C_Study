/*GTK4.0 - GtkFixed*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

static void app_activate(GApplication* app, gpointer* user_data) {
    GtkWidget* window = gtk_application_window_new(GTK_APPLICATION(app));
    gtk_window_set_title(GTK_WINDOW(window), "GTK Grid");
    gtk_window_set_default_size(GTK_WINDOW(window), 640, 480);

    GtkWidget* fix = gtk_fixed_new();

    GtkWidget* btn0 = gtk_button_new_with_label("Button 0");
    gtk_widget_set_size_request(btn0, 64, 64);
    gtk_fixed_put(GTK_FIXED(fix), btn0, 50, 50);

    GtkWidget* btn1 = gtk_button_new_with_label("Button 1");
    gtk_widget_set_size_request(btn1, 96, 96);
    gtk_fixed_put(GTK_FIXED(fix), btn1, 150, 150);

    gtk_fixed_move(GTK_FIXED(fix), btn1, 80, 70);
    gtk_fixed_move(GTK_FIXED(fix), btn0, 200, 300);

    gtk_window_set_child(GTK_WINDOW(window), fix);
    gtk_window_present(GTK_WINDOW(window));
}
int main(int argc, char **argv) {
    GtkApplication* app = gtk_application_new("my.gtk.box", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}