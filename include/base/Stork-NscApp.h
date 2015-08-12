#ifndef STORK_NSCAPP_H
#define STORK_NSCAPP_H

#include "MooseApp.h"

class Stork_NscApp;

template<>
InputParameters validParams<Stork_NscApp>();

class Stork_NscApp : public MooseApp
{
public:
  Stork_NscApp(InputParameters parameters);
  virtual ~Stork_NscApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* STORK_NSCAPP_H */
