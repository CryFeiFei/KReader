#include "kcommand.h"

kcommand::kcommand(QObject* host, QObject *parent) : QObject(parent)
, m_host (host)
{

}

QString kcommand::text() const
{
	return m_text;
}

void kcommand::setText(const QString& text)
{
	m_text = text;
}

void kcommand::setText(QString&& text)
{
	m_text = std::move(text);
}

bool kcommand::visible() const
{
	return  m_visible;
}

void kcommand::setVisible(bool visible)
{
	m_visible = visible;
}

//QIcon kcommand::icon() const
//{
//	return m_icon;
//}

//void kcommand::setIcon(const QIcon& icon)
//{
//	m_icon = icon;
//}

//void kcommand::setIcon(QIcon&& icon)
//{
//	m_icon = std::move(icon);
//}
