// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: user_model.fbe
// Version: 1.7.0.0

#include "bank_dom_final_models.h"

namespace FBE {

FinalModel<::bank_dom::Transaction>::FinalModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , from(buffer, 0)
    , to(buffer, 0)
    , amount(buffer, 0)
    , time(buffer, 0)
{}

size_t FinalModel<::bank_dom::Transaction>::fbe_allocation_size(const ::bank_dom::Transaction& fbe_value) const noexcept
{
    size_t fbe_result = 0
        + from.fbe_allocation_size(fbe_value.from)
        + to.fbe_allocation_size(fbe_value.to)
        + amount.fbe_allocation_size(fbe_value.amount)
        + time.fbe_allocation_size(fbe_value.time)
        ;
    return fbe_result;
}

size_t FinalModel<::bank_dom::Transaction>::verify() const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = verify_fields();
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Transaction>::verify_fields() const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_field_size;

    from.fbe_offset(fbe_current_offset);
    fbe_field_size = from.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    to.fbe_offset(fbe_current_offset);
    fbe_field_size = to.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    amount.fbe_offset(fbe_current_offset);
    fbe_field_size = amount.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    time.fbe_offset(fbe_current_offset);
    fbe_field_size = time.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    return fbe_current_offset;
}

size_t FinalModel<::bank_dom::Transaction>::get(::bank_dom::Transaction& fbe_value) const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = get_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Transaction>::get_fields(::bank_dom::Transaction& fbe_value) const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    from.fbe_offset(fbe_current_offset);
    fbe_field_size = from.get(fbe_value.from);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    to.fbe_offset(fbe_current_offset);
    fbe_field_size = to.get(fbe_value.to);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    amount.fbe_offset(fbe_current_offset);
    fbe_field_size = amount.get(fbe_value.amount);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    time.fbe_offset(fbe_current_offset);
    fbe_field_size = time.get(fbe_value.time);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

size_t FinalModel<::bank_dom::Transaction>::set(const ::bank_dom::Transaction& fbe_value) noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = set_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Transaction>::set_fields(const ::bank_dom::Transaction& fbe_value) noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    from.fbe_offset(fbe_current_offset);
    fbe_field_size = from.set(fbe_value.from);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    to.fbe_offset(fbe_current_offset);
    fbe_field_size = to.set(fbe_value.to);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    amount.fbe_offset(fbe_current_offset);
    fbe_field_size = amount.set(fbe_value.amount);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    time.fbe_offset(fbe_current_offset);
    fbe_field_size = time.set(fbe_value.time);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

namespace bank_dom {

bool TransactionFinalModel::verify()
{
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return false;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return false;

    return ((8 + _model.verify()) == fbe_struct_size);
}

size_t TransactionFinalModel::serialize(const ::bank_dom::Transaction& value)
{
    size_t fbe_initial_size = this->buffer().size();

    uint32_t fbe_struct_type = (uint32_t)fbe_type();
    uint32_t fbe_struct_size = (uint32_t)(8 + _model.fbe_allocation_size(value));
    uint32_t fbe_struct_offset = (uint32_t)(this->buffer().allocate(fbe_struct_size) - this->buffer().offset());
    assert(((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) > this->buffer().size())
        return 0;

    fbe_struct_size = (uint32_t)(8 + _model.set(value));
    this->buffer().resize(fbe_initial_size + fbe_struct_size);

    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8)) = fbe_struct_size;
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4)) = fbe_struct_type;

    return fbe_struct_size;
}

size_t TransactionFinalModel::deserialize(::bank_dom::Transaction& value) const noexcept
{
    assert(((this->buffer().offset() + _model.fbe_offset()) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return 0;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    assert(((fbe_struct_size > 0) && (fbe_struct_type == fbe_type())) && "Model is broken!");
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return 8;

    return 8 + _model.get(value);
}

} // namespace bank_dom

FinalModel<::bank_dom::Logs>::FinalModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , data(buffer, 0)
{}

size_t FinalModel<::bank_dom::Logs>::fbe_allocation_size(const ::bank_dom::Logs& fbe_value) const noexcept
{
    size_t fbe_result = 0
        + data.fbe_allocation_size(fbe_value.data)
        ;
    return fbe_result;
}

size_t FinalModel<::bank_dom::Logs>::verify() const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = verify_fields();
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Logs>::verify_fields() const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_field_size;

    data.fbe_offset(fbe_current_offset);
    fbe_field_size = data.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    return fbe_current_offset;
}

size_t FinalModel<::bank_dom::Logs>::get(::bank_dom::Logs& fbe_value) const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = get_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Logs>::get_fields(::bank_dom::Logs& fbe_value) const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    data.fbe_offset(fbe_current_offset);
    fbe_field_size = data.get(fbe_value.data);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

size_t FinalModel<::bank_dom::Logs>::set(const ::bank_dom::Logs& fbe_value) noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = set_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Logs>::set_fields(const ::bank_dom::Logs& fbe_value) noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    data.fbe_offset(fbe_current_offset);
    fbe_field_size = data.set(fbe_value.data);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

namespace bank_dom {

bool LogsFinalModel::verify()
{
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return false;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return false;

    return ((8 + _model.verify()) == fbe_struct_size);
}

size_t LogsFinalModel::serialize(const ::bank_dom::Logs& value)
{
    size_t fbe_initial_size = this->buffer().size();

    uint32_t fbe_struct_type = (uint32_t)fbe_type();
    uint32_t fbe_struct_size = (uint32_t)(8 + _model.fbe_allocation_size(value));
    uint32_t fbe_struct_offset = (uint32_t)(this->buffer().allocate(fbe_struct_size) - this->buffer().offset());
    assert(((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) > this->buffer().size())
        return 0;

    fbe_struct_size = (uint32_t)(8 + _model.set(value));
    this->buffer().resize(fbe_initial_size + fbe_struct_size);

    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8)) = fbe_struct_size;
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4)) = fbe_struct_type;

    return fbe_struct_size;
}

size_t LogsFinalModel::deserialize(::bank_dom::Logs& value) const noexcept
{
    assert(((this->buffer().offset() + _model.fbe_offset()) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return 0;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    assert(((fbe_struct_size > 0) && (fbe_struct_type == fbe_type())) && "Model is broken!");
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return 8;

    return 8 + _model.get(value);
}

} // namespace bank_dom

FinalModel<::bank_dom::User>::FinalModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , balance(buffer, 0)
    , password(buffer, 0)
    , logs(buffer, 0)
{}

size_t FinalModel<::bank_dom::User>::fbe_allocation_size(const ::bank_dom::User& fbe_value) const noexcept
{
    size_t fbe_result = 0
        + balance.fbe_allocation_size(fbe_value.balance)
        + password.fbe_allocation_size(fbe_value.password)
        + logs.fbe_allocation_size(fbe_value.logs)
        ;
    return fbe_result;
}

size_t FinalModel<::bank_dom::User>::verify() const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = verify_fields();
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::User>::verify_fields() const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_field_size;

    balance.fbe_offset(fbe_current_offset);
    fbe_field_size = balance.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    password.fbe_offset(fbe_current_offset);
    fbe_field_size = password.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    logs.fbe_offset(fbe_current_offset);
    fbe_field_size = logs.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    return fbe_current_offset;
}

size_t FinalModel<::bank_dom::User>::get(::bank_dom::User& fbe_value) const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = get_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::User>::get_fields(::bank_dom::User& fbe_value) const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    balance.fbe_offset(fbe_current_offset);
    fbe_field_size = balance.get(fbe_value.balance);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    password.fbe_offset(fbe_current_offset);
    fbe_field_size = password.get(fbe_value.password);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    logs.fbe_offset(fbe_current_offset);
    fbe_field_size = logs.get(fbe_value.logs);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

size_t FinalModel<::bank_dom::User>::set(const ::bank_dom::User& fbe_value) noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = set_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::User>::set_fields(const ::bank_dom::User& fbe_value) noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    balance.fbe_offset(fbe_current_offset);
    fbe_field_size = balance.set(fbe_value.balance);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    password.fbe_offset(fbe_current_offset);
    fbe_field_size = password.set(fbe_value.password);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    logs.fbe_offset(fbe_current_offset);
    fbe_field_size = logs.set(fbe_value.logs);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

namespace bank_dom {

bool UserFinalModel::verify()
{
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return false;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return false;

    return ((8 + _model.verify()) == fbe_struct_size);
}

size_t UserFinalModel::serialize(const ::bank_dom::User& value)
{
    size_t fbe_initial_size = this->buffer().size();

    uint32_t fbe_struct_type = (uint32_t)fbe_type();
    uint32_t fbe_struct_size = (uint32_t)(8 + _model.fbe_allocation_size(value));
    uint32_t fbe_struct_offset = (uint32_t)(this->buffer().allocate(fbe_struct_size) - this->buffer().offset());
    assert(((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) > this->buffer().size())
        return 0;

    fbe_struct_size = (uint32_t)(8 + _model.set(value));
    this->buffer().resize(fbe_initial_size + fbe_struct_size);

    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8)) = fbe_struct_size;
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4)) = fbe_struct_type;

    return fbe_struct_size;
}

size_t UserFinalModel::deserialize(::bank_dom::User& value) const noexcept
{
    assert(((this->buffer().offset() + _model.fbe_offset()) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return 0;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    assert(((fbe_struct_size > 0) && (fbe_struct_type == fbe_type())) && "Model is broken!");
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return 8;

    return 8 + _model.get(value);
}

} // namespace bank_dom

FinalModel<::bank_dom::Global>::FinalModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , keys(buffer, 0)
    , users(buffer, 0)
{}

size_t FinalModel<::bank_dom::Global>::fbe_allocation_size(const ::bank_dom::Global& fbe_value) const noexcept
{
    size_t fbe_result = 0
        + keys.fbe_allocation_size(fbe_value.keys)
        + users.fbe_allocation_size(fbe_value.users)
        ;
    return fbe_result;
}

size_t FinalModel<::bank_dom::Global>::verify() const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = verify_fields();
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Global>::verify_fields() const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_field_size;

    keys.fbe_offset(fbe_current_offset);
    fbe_field_size = keys.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    users.fbe_offset(fbe_current_offset);
    fbe_field_size = users.verify();
    if (fbe_field_size == std::numeric_limits<std::size_t>::max())
        return std::numeric_limits<std::size_t>::max();
    fbe_current_offset += fbe_field_size;

    return fbe_current_offset;
}

size_t FinalModel<::bank_dom::Global>::get(::bank_dom::Global& fbe_value) const noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = get_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Global>::get_fields(::bank_dom::Global& fbe_value) const noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    keys.fbe_offset(fbe_current_offset);
    fbe_field_size = keys.get(fbe_value.keys);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    users.fbe_offset(fbe_current_offset);
    fbe_field_size = users.get(fbe_value.users);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

size_t FinalModel<::bank_dom::Global>::set(const ::bank_dom::Global& fbe_value) noexcept
{
    _buffer.shift(fbe_offset());
    size_t fbe_result = set_fields(fbe_value);
    _buffer.unshift(fbe_offset());
    return fbe_result;
}

size_t FinalModel<::bank_dom::Global>::set_fields(const ::bank_dom::Global& fbe_value) noexcept
{
    size_t fbe_current_offset = 0;
    size_t fbe_current_size = 0;
    size_t fbe_field_size;

    keys.fbe_offset(fbe_current_offset);
    fbe_field_size = keys.set(fbe_value.keys);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    users.fbe_offset(fbe_current_offset);
    fbe_field_size = users.set(fbe_value.users);
    fbe_current_offset += fbe_field_size;
    fbe_current_size += fbe_field_size;

    return fbe_current_size;
}

namespace bank_dom {

bool GlobalFinalModel::verify()
{
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return false;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return false;

    return ((8 + _model.verify()) == fbe_struct_size);
}

size_t GlobalFinalModel::serialize(const ::bank_dom::Global& value)
{
    size_t fbe_initial_size = this->buffer().size();

    uint32_t fbe_struct_type = (uint32_t)fbe_type();
    uint32_t fbe_struct_size = (uint32_t)(8 + _model.fbe_allocation_size(value));
    uint32_t fbe_struct_offset = (uint32_t)(this->buffer().allocate(fbe_struct_size) - this->buffer().offset());
    assert(((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + fbe_struct_offset + fbe_struct_size) > this->buffer().size())
        return 0;

    fbe_struct_size = (uint32_t)(8 + _model.set(value));
    this->buffer().resize(fbe_initial_size + fbe_struct_size);

    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8)) = fbe_struct_size;
    *((uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4)) = fbe_struct_type;

    return fbe_struct_size;
}

size_t GlobalFinalModel::deserialize(::bank_dom::Global& value) const noexcept
{
    assert(((this->buffer().offset() + _model.fbe_offset()) <= this->buffer().size()) && "Model is broken!");
    if ((this->buffer().offset() + _model.fbe_offset()) > this->buffer().size())
        return 0;

    size_t fbe_struct_size = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 8));
    size_t fbe_struct_type = *((const uint32_t*)(this->buffer().data() + this->buffer().offset() + _model.fbe_offset() - 4));
    assert(((fbe_struct_size > 0) && (fbe_struct_type == fbe_type())) && "Model is broken!");
    if ((fbe_struct_size == 0) || (fbe_struct_type != fbe_type()))
        return 8;

    return 8 + _model.get(value);
}

} // namespace bank_dom

} // namespace FBE