#ifndef FILEATTACHMENTWIDGET_H
#define FILEATTACHMENTWIDGET_H

#include <QWidget>

namespace Ui {
class TFileAttachmentWidget;
}

/** Implements file attachment widget providing file attach GUI functionality to the email editor.
*/
class TFileAttachmentWidget : public QWidget
  {
  Q_OBJECT

  public:
    explicit TFileAttachmentWidget(QWidget* parent);
    virtual ~TFileAttachmentWidget();

  private slots:
    void onAddTriggered();
    void onDelTriggered();
    void onSaveTriggered();

  private:
    Ui::TFileAttachmentWidget *ui;
  };

#endif // FILEATTACHMENTWIDGET_H

