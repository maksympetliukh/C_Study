/*GTK 4.0 widget positioning*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

static void app_activate(GtkApplication* app, gpointer* user_data) {
    GtkWidget* window = gtk_application_window_new(GTK_APPLICATION_WINDOW(app));
    gtk_window_set_title(GTK_WINDOW(window), "Centred button");
    gtk_window_set_default_size(GTK_WINDOW(window), 250, 200);

    GtkWidget* button = gtk_button_new_with_label("Hello");

    //horizontal aligning by left
    gtk_widget_set_halign(button, GTK_ALIGN_START);
    //vertical aligning
    gtk_widget_set_valign(button, GTK_ALIGN_START);

    //indent bottom
    gtk_widget_set_margin_bottom(button, 10);
    //indent right
    gtk_widget_set_margin_end(button, 5);
    //-//- left
    gtk_widget_set_margin_start(button, 10);
    //-//-top
    gtk_widget_set_margin_top(button, 20);

    gtk_window_set_child(GTK_WINDOW(window), button);
    gtk_window_present(GTK_WINDOW(window));
}
int main(int argc, char** argv) {
    //init application
    GtkApplication* app = gtk_application_new("hello.world", G_APPLICATION_DEFAULT_FLAGS);
    //connect with signal
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), app);
    //run application
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    //free memory
    g_object_unref(app);

    return status;
}