#
# Copyright (c) 2021, Jared McNeill <jmcneill@invisible.ca>
#
# SPDX-License-Identifier: BSD-2-Clause-Patent
#

#
# Board specific initialization
#
INF Platform/Pine64/SOQuartz/Drivers/BoardInitDxe/BoardInitDxe.inf

#
# Devicetree support
#
INF Platform/Pine64/SOQuartz/Drivers/FdtDxe/FdtDxe.inf

#
# ACPI Support
#
INF MdeModulePkg/Universal/Acpi/AcpiTableDxe/AcpiTableDxe.inf
INF MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf
INF Platform/Pine64/SOQuartz/Drivers/PlatformAcpiDxe/PlatformAcpiDxe.inf
INF RuleOverride = ACPITABLE Platform/Pine64/SOQuartz/AcpiTables/AcpiTables.inf

#
# SMBIOS Support
#
INF Platform/Pine64/SOQuartz/Drivers/PlatformSmbiosDxe/PlatformSmbiosDxe.inf
INF MdeModulePkg/Universal/SmbiosDxe/SmbiosDxe.inf

#
# PINE64 logo (splash screen)
#
INF Platform/Pine64/Drivers/LogoDxe/LogoDxe.inf