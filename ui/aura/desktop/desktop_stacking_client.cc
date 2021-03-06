// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/aura/desktop/desktop_stacking_client.h"

#include "ui/aura/root_window.h"
#include "ui/aura/window.h"

namespace aura {

DesktopStackingClient::DesktopStackingClient() {
  aura::client::SetStackingClient(this);
}

DesktopStackingClient::~DesktopStackingClient() {
  aura::client::SetStackingClient(NULL);
}

Window* DesktopStackingClient::GetDefaultParent(Window* window) {
  return window->GetRootWindow();
}

}  // namespace aura
