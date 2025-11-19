/*GTK4.0 - GtkBox*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

static void app_activate(GApplication* app, gpointer* user_data) {
    GtkWidget* window = gtk_application_window_new(GTK_APPLICATION(app));
    gtk_window_set_title(GTK_WINDOW(window), "My GTK Box");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);

    //create container GtkBox
    GtkWidget* box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 10);
    gtk_widget_set_valign(box, GTK_ALIGN_START);

    //create a few buttons
    GtkWidget* btn0 = gtk_button_new_with_label("Button 0");
    GtkWidget* btn1 = gtk_button_new_with_label("Button 1");
    GtkWidget* btn2 = gtk_button_new_with_label("Button 2");

    //add all buttons to box
    gtk_box_append(GTK_BOX(box), btn0);
    gtk_box_append(GTK_BOX(box), btn1);
    gtk_box_append(GTK_BOX(box), btn2);

    gtk_window_set_child(GTK_WINDOW(window), box);
    gtk_window_present(GTK_WINDOW(window));
}
int main(int argc, char **argv) {
    GtkApplication* app = gtk_application_new("my.gtk.box", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}