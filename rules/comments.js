module.exports = {
  comment: $ => token(seq(/--/, repeat(/[^\n]/))),
};
