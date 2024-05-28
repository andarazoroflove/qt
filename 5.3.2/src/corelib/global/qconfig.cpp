/* Licensed */
static const char qt_configure_licensee_str          [512 + 12] = "qt_lcnsuser=Open Source";
static const char qt_configure_licensed_products_str [512 + 12] = "qt_lcnsprod=OpenSource";

/* Build date */
static const char qt_configure_installation          [11  + 12] = "qt_instdate=2024-05-23";

static const char qt_configure_prefix_path_strs[][12 + 512] = {
#ifndef QT_BUILD_QMAKE
    "qt_prfxpath=C:/qt/5.3.2",
    "qt_docspath=C:/qt/5.3.2/doc",
    "qt_hdrspath=C:/qt/5.3.2/include",
    "qt_libspath=C:/qt/5.3.2/lib",
    "qt_lbexpath=C:/qt/5.3.2/bin",
    "qt_binspath=C:/qt/5.3.2/bin",
    "qt_plugpath=C:/qt/5.3.2/plugins",
    "qt_impspath=C:/qt/5.3.2/imports",
    "qt_qml2path=C:/qt/5.3.2/qml",
    "qt_adatpath=C:/qt/5.3.2",
    "qt_datapath=C:/qt/5.3.2",
    "qt_trnspath=C:/qt/5.3.2/translations",
    "qt_xmplpath=C:/qt/5.3.2/examples",
    "qt_tstspath=C:/qt/5.3.2/tests",
#else
    "qt_prfxpath=C:/qt/5.3.2",
    "qt_docspath=C:/qt/5.3.2/doc",
    "qt_hdrspath=C:/qt/5.3.2/include",
    "qt_libspath=C:/qt/5.3.2/lib",
    "qt_lbexpath=C:/qt/5.3.2/bin",
    "qt_binspath=C:/qt/5.3.2/bin",
    "qt_plugpath=C:/qt/5.3.2/plugins",
    "qt_impspath=C:/qt/5.3.2/imports",
    "qt_qml2path=C:/qt/5.3.2/qml",
    "qt_adatpath=C:/qt/5.3.2",
    "qt_datapath=C:/qt/5.3.2",
    "qt_trnspath=C:/qt/5.3.2/translations",
    "qt_xmplpath=C:/qt/5.3.2/examples",
    "qt_tstspath=C:/qt/5.3.2/tests",
    "qt_ssrtpath=",
    "qt_hpfxpath=C:/qt/5.3.2",
    "qt_hbinpath=C:/qt/5.3.2/bin",
    "qt_hlibpath=C:/qt/5.3.2/lib",
    "qt_hdatpath=C:/qt/5.3.2",
    "qt_targspec=win32-g++",
    "qt_hostspec=win32-g++",
#endif
};

#ifdef QT_BUILD_QMAKE
static const char qt_sysrootify_prefix[] = "qt_ssrtfpfx=y";
#endif

/* strlen( "qt_lcnsxxxx") == 12 */
#define QT_CONFIGURE_LICENSEE qt_configure_licensee_str + 12;
#define QT_CONFIGURE_LICENSED_PRODUCTS qt_configure_licensed_products_str + 12;
