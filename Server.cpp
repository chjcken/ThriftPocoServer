#include <thrift/concurrency/ThreadManager.h>
#include <thrift/concurrency/PosixThreadFactory.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/server/TThreadPoolServer.h>
#include <thrift/server/TThreadedServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/TToString.h>

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <Poco/AutoPtr.h>
#include <Poco/Util/IniFileConfiguration.h>

#include "Counter.h"


using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::concurrency;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace apache::thrift::server;
using namespace counterService;
using boost::shared_ptr;

using Poco::AutoPtr;
using Poco::Util::IniFileConfiguration;
//
//const int TYPE_REG = 1;
//const int TYPE_LOG = 2;
//ServerFigure serv = ServerFigure();
//const int nul = -1;
//
//class CounterHandler : public CounterIf {
//public:
//  CounterHandler() {}
//
//  void ping() { cout << "ping()" << endl; }
//  
//  int findAccountById(const std::string& id){
//
//      int siz = (serv.listAccount).size();
//      for (int i = 0; i< (siz); i++){
//          if ((serv.listAccount[i]).id.compare(id) == 0)
//              return i;
//                  
//      }
//      
//      return nul;
//  }
//  
//  bool put(const std::string&  id , const int  putType ){
//      int acc = findAccountById(id);
//      if (putType == TYPE_REG){
//          if (acc != nul)
//              return false;
//          else {
//              //serv.listAccount.insert(0, acc);
//              Account a = Account();
//              a.__set_id(id);
//              serv.listAccount.push_back(a);
//              inc(id);
//              return true;
//          }
//      }
//      else {
//          if (acc == nul)
//              return false;
//          else {
//              inc(id);
//              return true;
//          }
//      }
//  }
//
//  int getTotal(){
//      return serv.totalVisitor;
//  }
//  
//  int get(const std::string&  id ) {
//      int index = findAccountById(id);
//      if (index != nul)
//          return serv.listAccount.at(index).visitor;
//      else return 0;
//  }
//  
//  void inc(const std::string& id) {
//      int index = findAccountById(id);
//      if (index != nul){
//          serv.listAccount.at(index).visitor++;
//          
//          serv.totalVisitor++;
//          
//      }
//  }
//  
//};
//
//int main() {
//    int port = 3333;
//    
//  boost::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
//  boost::shared_ptr<CounterHandler> handler(new CounterHandler());
//  boost::shared_ptr<TProcessor> processor(new CounterProcessor(handler));
//  boost::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
//  boost::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
//
//  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
//
//  /**
//   * Or you could do one of these
//
//  const int workerCount = 4;
//
//  boost::shared_ptr<ThreadManager> threadManager =
//    ThreadManager::newSimpleThreadManager(workerCount);
//  boost::shared_ptr<PosixThreadFactory> threadFactory =
//    boost::shared_ptr<PosixThreadFactory>(new PosixThreadFactory());
//  threadManager->threadFactory(threadFactory);
//  threadManager->start();
//  TThreadPoolServer server(processor,
//                           serverTransport,
//                           transportFactory,
//                           protocolFactory,
//                           threadManager);
//
//  TThreadedServer server(processor,
//                         serverTransport,
//                         transportFactory,
//                         protocolFactory);
//
//  */
//
//  cout << "Starting the server..." << endl;
//  server.serve();
//  cout << "Server is running on port " <<port<< endl;
//  return 0;
//}

//int main(int argc, char **argv) {
//    
//  AutoPtr<IniFileConfiguration> pConf (new IniFileConfiguration("app.ini"));
//  port = pConf->getInt("ViewCount.port", 3333);
//  workerCount = pConf->getInt("ViewCount.worker", 4);
//  int serverType = pConf->getInt("ViewCount.server", 0);
//  
//  shared_ptr<CounterHandler> handler(new CounterHandler());
//  shared_ptr<TProcessor> processor(new CounterProcessor(handler));
//  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
//  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
//  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());
//  
//  //cout <<port<<"\t"<<serverType<<"\t"<<workerCount<<endl;
//  
//  switch (serverType%3){
//      case 0:
//          startSimpleServer(processor, serverTransport, transportFactory, protocolFactory);
//          break;
//      case 1:
//          startThreadPoolServer(processor, serverTransport, transportFactory, protocolFactory);
//          break;
//      case 2:
//          startThreadedServer(processor, serverTransport, transportFactory, protocolFactory);
//          break;
//      default:
//          cout<<"nothing done"<<endl;
//          break;
//  
//  }  
//  
//  return 0;
//}

