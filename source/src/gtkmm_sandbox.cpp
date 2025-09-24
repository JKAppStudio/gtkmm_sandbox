/**
 * @file gtkmm_sandbox.cpp
 * @author Evgeny Krivoshein (jkappstudio@gmail.com)
 * @brief GTKmm Sandbox Application
 * @version 0.1
 * @date 2025-09-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */
    
#include "window_main.hpp"

#include <gtkmm/application.h>
#include <gtkmm/settings.h>

#define APP_ID "org.jkappstudio.gtkmm_sandbox"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(APP_ID);

        // Get the default GtkSettings object
    Glib::RefPtr<Gtk::Settings> settings = Gtk::Settings::get_default();

    // Set the gtk-application-prefer-dark-theme property to true
    if (settings)
    {
        settings->property_gtk_application_prefer_dark_theme() = true;
    }

    return app->make_window_and_run<MainWindow>(argc, argv);
}