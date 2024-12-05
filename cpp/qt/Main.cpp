
#include <QTimer>
#include <QSplitter>
#include <QApplication>

#include "MainWindow.h"

// Create a QAbstractTableModel subclass
//


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow window;

    // add the layout to the window
    QSplitter *frame = new QSplitter();
    window.setCentralWidget(frame);
    window.resize(800, 600);
    window.show();


    // configure a timer to update the model
    //
    QTimer *timer = new QTimer();
    timer->setInterval(1000);
    timer->connect(timer, &QTimer::timeout, []() {
        // TODO: do some processing here
    });
    timer->start();

    return app.exec();
}
