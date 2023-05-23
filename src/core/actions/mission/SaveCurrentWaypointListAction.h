#pragma once

#include <dataModel/business/MissionBusiness.h>
#include <dataModel/business/MissionStatusBusiness.h>

#include "../BasicAction.h"
#include "gcs_core_export.h"

namespace gcs {
class DataModel;

class PILOTING_GRCS_CORE_EXPORT SaveCurrentWaypointListAction : public BasicAction
{
    Q_OBJECT

  public:
    explicit SaveCurrentWaypointListAction(DataModel& dataModel, QObject* parent = nullptr);
    virtual ~SaveCurrentWaypointListAction();

    ActionType getActionType() override;

    void execute(QSharedPointer<IDTO>) override;

  Q_SIGNALS:
    void sendDTO(QSharedPointer<IDTO>) override;

  private:
    DataModel&            _dataModel;
    MissionBusiness       _missionBusiness;
    MissionStatusBusiness _missionStatusBusiness;
};
} // namespace gcs
