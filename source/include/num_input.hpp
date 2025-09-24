/**
 * @file num_input.hpp
 * @author Evgeny Krivoshein (jkappstudio@gmail.com)
 * @brief Numeric input widget
 * @version 0.1
 * @date 2025-09-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef __GTKMM_NUM_INPUT_HPP__
#define __GTKMM_NUM_INPUT_HPP__

#include <gtkmm/frame.h>
#include <gtkmm/spinbutton.h>
#include <gtkmm/adjustment.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>

#include <string>

template <typename T>
class NumInput : public Gtk::Frame
{
    static_assert(std::is_arithmetic<T>::value, "NumInput can only be instantiated with arithmetic types");
public:
    NumInput(const std::string& label = "Input:", T value = 0, T min = 0, T max = 100, T step = 1);
    virtual ~NumInput();

    void set_label(const std::string& label) {
        _label.set_text((Glib::ustring)label);
    }
    std::string get_label() const {
        return (std::string)_label.get_text();
    }

    void set_value(T value) {
        _adjustment->set_value(value);
    }

    T get_value() const {
        return static_cast<T>(_adjustment->get_value());
    }

private:
    Gtk::Box _box;
    Gtk::Label _label;
    Glib::RefPtr<Gtk::Adjustment> _adjustment;
    Gtk::SpinButton _input;
};

template <typename T>
NumInput<T>::NumInput(const std::string& label, T value, T min, T max, T step)
    : Gtk::Frame(),
      _box(Gtk::Orientation::VERTICAL, 5),
      _label(label, Gtk::Align::START),
      _adjustment(Gtk::Adjustment::create(value, min, max, step)),
      _input(_adjustment)
{
    _input.set_hexpand();
    _input.set_vexpand(false);
    _box.append(_label);
    _box.append(_input);
    set_child(_box);
}

template <typename T>
NumInput<T>::~NumInput()
{}

#endif // !__GTKMM_NUM_INPUT_HPP__