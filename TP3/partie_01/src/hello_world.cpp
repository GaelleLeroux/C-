
//include for Qt
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
  //init parameters for Qt
  QApplication app(argc, argv);

  //create a button
  QPushButton helloButton("Hello World");

  //create a button
  QPushButton holaButton("Holla!!");
  //set the size of the button
  helloButton.resize(100, 30);
  holaButton.resize(100,30);

  //set the visibility of the button
  helloButton.show();
  holaButton.show();

  //start the application
  return app.exec();
}

