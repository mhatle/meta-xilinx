LICENSE = "Proprietary"
LIC_FILES_CHKSUM = "file://license.txt;md5=3a6e22aebf6516f0f74a82e1183f74f8"

SRCREV = "2516d5ed8161e16c2813b0e8e4ceac693f23de5c"
PV = "${XILINX_RELEASE_VERSION}+git${SRCPV}"

SRC_URI = "git://github.com/Xilinx/embeddedsw.git;protocol=https;branch=master-rel-2020.2 \
           file://fix-zynqmp-assert.patch \
          "

#SRC_URI += "file://0001-Revert-axidma-Remove-BAREMETAL-identifier-from-axidm.patch"
#SRC_URI += "file://0001-Revert-Revert-mcdma-Add-BAREMETAL-identifier-to-the-.patch"
#SRC_URI += "file://0001-Revert-Makefile-Remove-realpath-command.patch"
#SRC_URI += "file://0001-Revert-freertos10_xilinx-Fixed-minor-version.patch"
#SRC_URI += "file://0001-Revert-lib-bsp-armclang-r5-Fix-compilation-issue-wit.patch"
#SRC_URI += "file://0001-Revert-BSP-cortexr5-iccarm-Use-correct-suffix-to-poi.patch"
#SRC_URI += "file://0001-Revert-ipipsu-Modify-Makefile-to-support-parallel-ma.patch"
#SRC_URI += "file://0001-Revert-csudma-Update-Makefile-to-support-parallel-ma.patch"
#SRC_URI += "file://0001-Revert-iomodule-Support-parallel-make-and-incrementa.patch"
#SRC_URI += "file://0001-Revert-BSP-Fix-dependency-files-removal.patch"
#SRC_URI += "file://0001-Revert-uartps-Modify-Makefile-to-support-parallel-ma.patch"
#SRC_URI += "file://0001-Revert-freertos10_xilinx-Support-parallel-make-execu.patch"
#SRC_URI += "file://0001-Revert-BSP-Support-parallel-make-execution.patch"

SRC_URI += "file://0001-sw_apps-Cleanup-hardcoded-compiler-names-in-certain-.patch"
