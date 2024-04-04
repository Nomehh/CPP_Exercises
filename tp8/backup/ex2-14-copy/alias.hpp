#pragma once

#include <memory>

// Definir les alias PTR_ALIAS1 et PTR_ALIAS2

using PTR_ALIAS1 = std::unique_ptr<InstanceCounter>;
using PTR_ALIAS2 = InstanceCounter*;