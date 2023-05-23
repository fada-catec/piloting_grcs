
#include "../BasicAction.h"

namespace gcs {
class DataModel;

class PILOTING_GRCS_CORE_EXPORT UpdateCommsLinkDDHLAction : public BasicAction
{
    Q_OBJECT

  public:
    explicit UpdateCommsLinkDDHLAction(DataModel& dataModel, QObject* parent = nullptr);
    virtual ~UpdateCommsLinkDDHLAction();

    ActionType getActionType() override;

    void execute(QSharedPointer<IDTO>) override;

  private:
    DataModel& _dataModel;
};

} // namespace gcs
