%global soname dframeworkdbus
%global repo   dde-qt-dbus-factory

Name:           dde-qt-dbus-factory
Version:        5.2.0.0
Release:        3
Summary:        A repository stores auto-generated Qt5 dbus code
# The entire source code is GPLv3+ except
# libdframeworkdbus/qtdbusextended/ which is LGPLv2+
License:        GPLv3+ and LGPLv2+
URL:            http://shuttle.corp.deepin.com/cache/repos/eagle/release-candidate/56qX566h6IGU6LCD5rWL6K-V6aqM6K-BMDUyMTQ5Mg/pool/main/d/dde-qt-dbus-factory/
Source0:        %{name}_%{version}.orig.tar.xz

BuildRequires:  python3-devel
BuildRequires:  pkgconfig(gl)
BuildRequires:  pkgconfig(Qt5Core)
BuildRequires:  pkgconfig(Qt5DBus)
BuildRequires:  pkgconfig(Qt5Gui)

%description
A repository stores auto-generated Qt5 dbus code.

%package devel
Summary:        Development package for %{name}
Requires:       %{name}%{?_isa} = %{version}-%{release}
Requires:       cmake-filesystem

%description devel
Header files and libraries for %{name}.

%prep
%setup -q -n %{repo}-%{version}
sed -i "s/env python$/env python3/g" libdframeworkdbus/generate_code.py
sed -i "s/python/python3/g" libdframeworkdbus/libdframeworkdbus.pro

%build
%qmake_qt5 LIB_INSTALL_DIR=%{_libdir}
sed -i "s/python/python3/g" Makefile
%make_build

%install
%make_install INSTALL_ROOT=%{buildroot}

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
#%doc README
%license LICENSE
%{_libdir}/lib%{soname}.so.*

%files devel
%{_includedir}/lib%{soname}-2.0/
%{_libdir}/pkgconfig/%{soname}.pc
%{_libdir}/lib%{soname}.so
%{_libdir}/cmake/DFrameworkdbus/DFrameworkdbusConfig.cmake

%changelog
* Thu Jun 09 2020 uoser <uoser@uniontech.com> - 5.2.0.2-1
- Update to 5.2.0.2
