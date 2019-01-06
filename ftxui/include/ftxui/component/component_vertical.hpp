#ifndef FTXUI_COMPONENT_COMPONENT_VERTICAL_H_
#define FTXUI_COMPONENT_COMPONENT_VERTICAL_H_

#include "ftxui/component/component_direction.hpp"

namespace ftxui::component {

// A component where focus and events are automatically handled for you.
// It assumes its children are put in the vertical direction.
class ComponentVertical : public ComponentDirection {
 public:
  ComponentVertical(Delegate*);
  bool HandleDirection(Event) override;
};

} // namespace ftxui::component

#endif /* end of include guard: FTXUI_COMPONENT_COMPONENT_VERTICAL_H_ */