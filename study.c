/*GTK 4.0 mixed sources*/

#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

static void app_activate(GtkApplication* app, gpointer* user_data) {
    //define interface
    const char* xml_label = "<interface><object class=\"GtkLabel\" id=\"label\"><property name=\"label\">Hello, my friend</property></object></interface>";

    //create GtkBuilder object and upload interface definition from xml variable
    GtkBuilder* builder = gtk_builder_new_from_file("builder.ui");

    //Upload interface definition from xml_label
    gtk_builder_add_from_string(builder, xml_label, -1, NULL);

    //Get object window by identifier "window"
    GObject* window = gtk_builder_get_object(builder, "window");

    //Get object label by identifier "label"
    GObject* label = gtk_builder_get_object(builder, "label");

    //Add GtkLabel to GtkWindow
    gtk_window_set_child(GTK_WINDOW(window), GTK_WIDGET(label));

    //Free GtkBuilder
    g_object_unref(builder);

    //Set application window
    gtk_window_set_application(GTK_WINDOW(window), app);

    //Show application window
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