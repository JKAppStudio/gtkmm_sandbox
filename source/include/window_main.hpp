/**
 * @file window_main.hpp
 * @author Evgeny Krivoshein (jkappstudio@gmail.com)
 * @brief Main window class definition
 * @version 0.1
 * @date 2025-09-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef __SBX_WINDOW_MAIN_HPP__
#define __SBX_WINDOW_MAIN_HPP__

#include "num_input.hpp"

#include <gtkmm/window.h>
#include <gtkmm/grid.h>

class MainWindow : public Gtk::Window
{
public:
    MainWindow();
    virtual ~MainWindow();

protected:

private:
    Gtk::Grid _grid;
    NumInput<int> _num_input;   
};

#endif // !__SBX_WINDOW_MAIN_HPP__