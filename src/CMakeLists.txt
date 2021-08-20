rock_find_qt5()

rock_executable(test_qt4
    SOURCES
        Main.cpp
	Gui.cpp
    MOC
	Gui.h
    UI
        main.ui 
)
