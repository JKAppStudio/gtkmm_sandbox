/**
 * @file window_main.cpp
 * @author Evgeny Krivoshein (jkappstudio@gmail.com)
 * @brief Main window class implementation
 * @version 0.1
 * @date 2025-09-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "window_main.hpp"

MainWindow::MainWindow()
    :_num_input("Numeric Input:", 10, 0, 100, 1)
{
    set_title("GTKmm Sandbox");
    set_default_size(400, 200);

    _grid.attach(_num_input, 0, 0);
    set_child(_grid);
}

MainWindow::~MainWindow()
{}
