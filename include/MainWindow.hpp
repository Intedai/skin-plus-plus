#pragma once

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
protected:
    //void closeEvent(QCloseEvent *event) override; // use this to make sure it asks to save on quit and adding the "*"
private slots:
    void newFile();
    void openFile();
    void undo();
    void redo();
private:
    void createActions();
    void createMenus();

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *adjustmentsMenu;

    QAction *newFileAct;
    QAction *openFileAct;
    QAction *quitAct;
    QAction *undoAct;
    QAction *redoAct;
};