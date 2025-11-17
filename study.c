/*GTK 4.0*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

static void app_activate(GApplication* app, gpointer* user_data) {
    //Create an object GtkBuilder and download interface definition from builder.ui
    GtkBuilder* builder = gtk_builder_new_from_file("builder.ui");

    //Get object GtkWindow by identifier "window"
    GObject* window = gtk_builder_get_object(builder, "window");

    gtk_window_set_application(GTK_WINDOW(window), app);//set application window
    g_object_unref(builder);//Free GtkBuilder

    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char** argv) {
    GtkApplication* app = gtk_application_new("my.app", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(app_activate), app);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}