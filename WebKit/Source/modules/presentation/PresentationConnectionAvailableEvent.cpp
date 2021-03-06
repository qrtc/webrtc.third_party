// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/presentation/PresentationConnectionAvailableEvent.h"

#include "modules/presentation/PresentationConnectionAvailableEventInit.h"

namespace blink {

PresentationConnectionAvailableEvent::~PresentationConnectionAvailableEvent() {}

PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(
    const AtomicString& event_type,
    PresentationConnection* connection)
    : Event(event_type, false /* canBubble */, false /* cancelable */),
      connection_(connection) {}

PresentationConnectionAvailableEvent::PresentationConnectionAvailableEvent(
    const AtomicString& event_type,
    const PresentationConnectionAvailableEventInit& initializer)
    : Event(event_type, initializer), connection_(initializer.connection()) {}

const AtomicString& PresentationConnectionAvailableEvent::InterfaceName()
    const {
  return EventNames::PresentationConnectionAvailableEvent;
}

DEFINE_TRACE(PresentationConnectionAvailableEvent) {
  visitor->Trace(connection_);
  Event::Trace(visitor);
}

}  // namespace blink
