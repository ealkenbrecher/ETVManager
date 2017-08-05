#include "redmineimpl.h"
#include "RedmineClient.hpp"

RedmineImpl::RedmineImpl ()
{

}

RedmineImpl::~RedmineImpl ()
{

}

void RedmineImpl::exportCurrentProjekt ()
{
  RedmineClient client (QString("http://demo.redmine.org/"), QString("HVTest"), QString("test01!"));



  QString lString = "POST /issues.xml <?xml version=\"1.0\"?> <issue> <project_id>1</project_id> <subject>Example</subject> <priority_id>4</priority_id> </issue>";
  QByteArray array (lString.toStdString().c_str(), 100);
  client.sendRequest(QUrl("http://demo.redmine.org/"), RedmineClient::POST, array);
}
