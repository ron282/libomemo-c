Name:           omemo-c
Summary:        Lib omemo-c (OMEMO encryption library)
Version:        0.5.0
Release:        1
License:        LGPLv2+
URL:            https://github.com/dino-im/libomemo-c
Source0:        %{name}-%{version}.tar.gz
BuildRequires:  gcc-c++
BuildRequires:  cmake
BuildRequires:  check-devel
BuildRequires:  openssl-devel

%description
libomemo-c is a fork of libsignal-protocol-c used for OMEMO encryption in XMPP clients.

%package devel
Summary:        Development files for %{name}
Requires:       %{name} = %{version}-%{release}
Provides:       %{name}-devel

%description devel
Contains headers and development files for %{name}.

%prep
%setup -q -n libomemo-c-%{version}

%build
mkdir -p build
pushd build
%cmake .. \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
    -DBUILD_TESTING=OFF
%make_build
popd

%install
pushd build
%make_install
popd

%post
/sbin/ldconfig

%postun
/sbin/ldconfig

%files
%defattr(-, root, root, -)
%{_libdir}/libomemo-c.so.*

%files devel
%doc LICENSE
%defattr(-, root, root, -)
%{_includedir}/omemo/*.h
%{_libdir}/pkgconfig/libomemo-c.pc
%{_libdir}/libomemo-c.so

%changelog
* Tue Jun 23 2026 Ronan <ronan35@gmx.fr> - 0.5.0-1
- Initial SailfishOS package
- Vendor protobuf-c runtime, correct spec for sfdk build
