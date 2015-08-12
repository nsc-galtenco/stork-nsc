#include "Stork-NscApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"

template<>
InputParameters validParams<Stork_NscApp>()
{
  InputParameters params = validParams<MooseApp>();

  params.set<bool>("use_legacy_uo_initialization") = false;
  params.set<bool>("use_legacy_uo_aux_computation") = false;
  return params;
}

Stork_NscApp::Stork_NscApp(InputParameters parameters) :
    MooseApp(parameters)
{

  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  Stork_NscApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  Stork_NscApp::associateSyntax(_syntax, _action_factory);
}

Stork_NscApp::~Stork_NscApp()
{
}

void
Stork_NscApp::registerApps()
{
  registerApp(Stork_NscApp);
}

void
Stork_NscApp::registerObjects(Factory & factory)
{
}

void
Stork_NscApp::associateSyntax(Syntax & syntax, ActionFactory & action_factory)
{
}
