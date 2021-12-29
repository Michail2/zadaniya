#include "class.hpp"
#include "form.hpp"
#include <QApplication>
#include <QIcon>
#include <QTranslator>
using namespace std;
int main( int argc, char** argv )
{
    QApplication app( argc, argv );

    // Подключение переводов в зависимости от текущей локали
    /*auto* translator = new QTranslator( QApplication::instance() );
    if ( translator->load( QLocale(), MYX_CMAKE_PROJECT_NAME, QStringLiteral( "_" ), QStringLiteral( ":/qm" ) ) )
    {
        QApplication::installTranslator( translator );
    }

    // Установка иконки для программы
    QApplication::setWindowIcon( QIcon( ":/icon/icon.png" ) );*/

    // Создание и отображение главного окна
    auto* w = new Form();
    w->show();
    return( QApplication::exec() );
}
int main1()
{

}
