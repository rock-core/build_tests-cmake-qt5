rock_find_qt5(Widgets)

rock_executable(test_qt5
    SOURCES
        Main.cpp
	    Gui.cpp
        main.ui
    DEPS
        Qt5::Widgets
)
