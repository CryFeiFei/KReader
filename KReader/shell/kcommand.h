// MIT License
// auther zhangpengfei
// email zhangpf0313@gmail.com

#ifndef KCOMMAND_H
#define KCOMMAND_H

#include <QObject>
#include <QString>
#include <QIcon>

class kcommand : public QObject
{
	Q_OBJECT
	Q_PROPERTY(QString text READ text WRITE setText)
	Q_PROPERTY(QString text MEMBER m_text NOTIFY textChange)
	Q_PROPERTY(bool visible READ visible WRITE setVisible)
	Q_PROPERTY(bool visible MEMBER m_visible NOTIFY visibleChange)
//	Q_PROPERTY(QIcon icon READ icon WRITE setIcon)
//	Q_PROPERTY(QIcon icon MEMBER m_icon NOTIFY iconChange)
	using QObject::QObject;
public:
	explicit kcommand(QObject* host = nullptr, QObject *parent = nullptr);

public:
	QString text() const;
	void setText(const QString& text);
	void setText(QString&& text);

	bool visible() const;
	void setVisible(bool visible);

//	QIcon icon() const;
//	void setIcon(const QIcon& icon);
//	void setIcon(QIcon&& icon);


signals:
	void textChange();
	void visibleChange();
//	void iconChange();

public slots:

private:
	QObject* m_host; //这个应该是主界面的
	QString m_text;
	bool m_visible;
	QIcon m_icon;
};

#endif // KCOMMAND_H
