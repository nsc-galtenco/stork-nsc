#ifndef STORK-NSCAPP_H
#define STORK-NSCAPP_H

#include "MooseApp.h"

class Stork-NscApp;

template<>
InputParameters validParams<Stork-NscApp>();

class Stork-NscApp : public MooseApp
{
public:
  Stork-NscApp(const std::string & name, InputParameters parameters);
  virtual ~Stork-NscApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* STORK-NSCAPP_H */
