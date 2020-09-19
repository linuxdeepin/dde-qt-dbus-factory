#include "policydetails.h"

void registerPolicyDetailsMetaType()
{
    qRegisterMetaType<PolicyDetails>("PolicyDetails");
    qDBusRegisterMetaType<PolicyDetails>();
}
